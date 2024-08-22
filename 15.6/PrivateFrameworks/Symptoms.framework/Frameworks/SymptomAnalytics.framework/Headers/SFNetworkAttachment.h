// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFNETWORKATTACHMENT_H
#define SFNETWORKATTACHMENT_H

@class NSManagedObject, NSNumber, NSDate, NSSet, NSString, NSData;



@interface SFNetworkAttachment : NSManagedObject

@property (copy, nonatomic) NSNumber *attrs;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) NSSet *hasDefaultRoute;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isHotSpot;
@property (nonatomic) BOOL isKnownGood;
@property (nonatomic) BOOL isKnownSporadic;
@property (nonatomic) BOOL isLowInternetDL;
@property (nonatomic) BOOL isLowInternetUL;
@property (copy, nonatomic) NSNumber *kind;
@property (retain, nonatomic) NSData *netSignature;
@property (copy, nonatomic) NSNumber *overallStayMean;
@property (copy, nonatomic) NSNumber *overallStayVar;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) NSSet *supportsFlows;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *velo;
@property (nonatomic) BOOL wasLastFailed;


+(id)entityName;
+(id)fetchRequest;


@end


#endif