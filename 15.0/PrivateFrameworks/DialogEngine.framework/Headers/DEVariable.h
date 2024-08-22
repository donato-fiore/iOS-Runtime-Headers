// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVARIABLE_H
#define DEVARIABLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEVariable : NSObject

@property shared_ptr<siri::dialogengine::Variable> This; // ivar: _This
@property (retain) NSString *name;
@property (retain) NSString *type;


-(*void)getSharedPtr;
-(BOOL)isEmpty;
-(id)init;
-(id)initWithSharedPtr:(*void)arg0 ;
-(id)toString:(int)arg0 ;


@end


#endif