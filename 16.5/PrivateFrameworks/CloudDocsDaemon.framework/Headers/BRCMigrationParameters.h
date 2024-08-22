// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCMIGRATIONPARAMETERS_H
#define BRCMIGRATIONPARAMETERS_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCMigrationParameters : NSObject <NSSecureCoding>



@property BOOL cloneOnly; // ivar: cloneOnly
@property BOOL dropAccountFile; // ivar: dropAccountFile
@property BOOL dropClientState; // ivar: dropClientState
@property (retain) NSError *errorOverride; // ivar: errorOverride
@property NSUInteger originatorIdOverride; // ivar: originatorIdOverride


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif