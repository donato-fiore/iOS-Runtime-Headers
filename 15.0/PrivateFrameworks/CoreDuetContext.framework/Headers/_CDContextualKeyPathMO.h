// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCONTEXTUALKEYPATHMO_H
#define _CDCONTEXTUALKEYPATHMO_H

@class NSManagedObject, NSDate, NSString, NSData;



@interface _CDContextualKeyPathMO : NSManagedObject

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *deviceIDString;
@property (nonatomic) BOOL isEphemeral;
@property (nonatomic) BOOL isUserCentric;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSData *value;


+(id)materializedContextValueFrom:(id)arg0 ;
+(id)materializedKeyPathFrom:(id)arg0 ;
+(void)hydrateMO:(id)arg0 fromKeyPath:(id)arg1 andValue:(id)arg2 ;


@end


#endif