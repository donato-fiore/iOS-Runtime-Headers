// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAAPPSESSION_H
#define DAAPPSESSION_H

@class NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface DAAppSession : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif