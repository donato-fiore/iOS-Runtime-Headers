// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMFIPATHVALIDATOR_IOS_H
#define AMFIPATHVALIDATOR_IOS_H

@class NSURL, NSNumber, NSData, NSError;

#import <Foundation/Foundation.h>


@interface AMFIPathValidator_ios : NSObject {
    NSURL *_url;
    NSNumber *_offset;
    int _flags;
    BOOL _validated;
    NSUInteger _bootargs;
    NSData *_cdhash;
    NSData *_profileData;
}


@property (readonly, nonatomic) BOOL areEntitlementsValidated; // ivar: _areEntitlementsValidated
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSData *profileData;
@property (readonly, nonatomic) unsigned int signerType; // ivar: _signerType


-(BOOL)computedCdHash:(unsigned char)arg0 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 withFileOffset:(NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 withFileOffset:(NSUInteger)arg1 withFlags:(int)arg2 ;
-(id)initWithURL:(id)arg0 withFileOffsetAsNumber:(id)arg1 withFlags:(int)arg2 ;
-(id)initWithURL:(id)arg0 withFlags:(int)arg1 ;
-(int)isSignerType;


@end


#endif