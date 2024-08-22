// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORNICKNAMEINFORMATION_H
#define BLASTDOORNICKNAMEINFORMATION_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorNicknameInformation : NSObject {
    ? nicknameInformation;
}


@property (nonatomic, readonly) NSData *decryptionKey;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *recordKey;


-(id)init;


@end


#endif