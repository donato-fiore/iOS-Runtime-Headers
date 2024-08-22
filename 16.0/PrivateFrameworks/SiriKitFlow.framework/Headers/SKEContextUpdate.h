// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKECONTEXTUPDATE_H
#define SKECONTEXTUPDATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKEContextUpdate : NSObject <NSSecureCoding>

 {
    ? provideContextCommand;
    ? nativeFlowContextCommand;
    ? systemDialogActs;
    ? rrEntities;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif