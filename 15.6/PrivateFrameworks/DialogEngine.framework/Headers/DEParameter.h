// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEPARAMETER_H
#define DEPARAMETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEParameter : NSObject

@property shared_ptr<siri::dialogengine::Parameter> This; // ivar: _This
@property (retain) NSString *description;
@property (retain) NSString *name;
@property (retain) NSString *semanticConcept;
@property (retain) NSString *type;


-(*void)getSharedPtr;
-(id)init;
-(id)initWithSharedPtr:(*void)arg0 ;


@end


#endif