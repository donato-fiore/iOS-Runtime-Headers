// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFTAG_H
#define NFTAG_H

@class NSData, NSArray, NSString;
@protocol NSSecureCoding, NFTag, NFTagA, NFTagB, NFTagF;

#import <Foundation/Foundation.h>


@interface NFTag : NSObject <NSSecureCoding, NFTag, NFTagA, NFTagB, NFTagF>

 {
    unsigned int _type;
    unsigned int _technology;
    NSData *_tagID;
    NSData *_pmm;
    NSArray *_allSystemCodes;
    NSData *_appData;
    NSData *_uid;
    NSString *_description;
    unsigned int _ndefAvailability;
    NSUInteger _ndefMessageSize;
    NSUInteger _ndefContainerSize;
    NSData *_atqa;
    NSData *_sak;
    NSData *_historicalBytes;
    unsigned char _sfgi;
}


@property (readonly, copy, nonatomic) NSData *AppData;
@property (readonly, copy, nonatomic) NSData *IDm;
@property (readonly, copy, nonatomic) NSData *PMm;
@property (readonly, copy, nonatomic) NSData *SystemCode;
@property (readonly, copy, nonatomic) NSData *UID;
@property (readonly, copy, nonatomic) NSArray *allSystemCodes;
@property (readonly, copy, nonatomic) NSData *applicationData;
@property (readonly, nonatomic) BOOL applicationDataCoding;
@property (readonly, copy, nonatomic) NSData *atqa;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, nonatomic) unsigned int ndefAvailability;
@property (readonly, nonatomic) NSUInteger ndefContainerSize;
@property (readonly, nonatomic) NSUInteger ndefMessageSize;
@property (readonly, copy, nonatomic) NSData *pupi;
@property (readonly, copy, nonatomic) NSData *sak;
@property (readonly, copy, nonatomic) NSData *selectedAID;
@property (readonly, nonatomic) unsigned char sfgi;
@property (readonly, nonatomic) CGFloat sfgt;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NFTagA> *tagA;
@property (readonly, nonatomic) NSObject<NFTagB> *tagB;
@property (readonly, nonatomic) NSObject<NFTagF> *tagF;
@property (readonly, copy, nonatomic) NSData *tagID;
@property (readonly, nonatomic) unsigned int technology;
@property (readonly, nonatomic) unsigned int type;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToNFTag:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNFTag:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif