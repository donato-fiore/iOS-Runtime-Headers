// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSPCONCRETESOURCE_H
#define _HDSPCONCRETESOURCE_H

@class NSString;
@protocol HDSPSource;

#import <Foundation/Foundation.h>


@interface _HDSPConcreteSource : NSObject <HDSPSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontNotify; // ivar: _dontNotify
@property (nonatomic) BOOL dontSync; // ivar: _dontSync
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly) Class superclass;




@end


#endif