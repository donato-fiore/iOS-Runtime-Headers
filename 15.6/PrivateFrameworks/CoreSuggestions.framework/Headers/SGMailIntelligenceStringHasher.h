// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMAILINTELLIGENCESTRINGHASHER_H
#define SGMAILINTELLIGENCESTRINGHASHER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SGMailIntelligenceStringHasher : NSObject {
    NSData *_salt;
}


@property (retain, nonatomic) NSData *rotatingSalt; // ivar: _rotatingSalt


+(NSInteger)hashedString:(id)arg0 salts:(id)arg1 ;
+(NSInteger)truncatedSHA256:(id)arg0 salts:(id)arg1 ;
+(id)rotatingSaltForDate:(id)arg0 ;
-(NSInteger)hashedString:(id)arg0 ;
-(NSInteger)hashedUserId;
-(NSInteger)truncatedSHA256:(id)arg0 ;
-(NSInteger)unrotatedHashedString:(id)arg0 withHashSize:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithSaltValue:(id)arg0 ;
-(id)unrotatedHashedStrings:(id)arg0 withHashSize:(NSUInteger)arg1 ;


@end


#endif