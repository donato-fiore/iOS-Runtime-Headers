// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTTREEHEAD_H
#define KTTREEHEAD_H

@class NSManagedObject, NSString, NSSet, NSData;



@interface KTTreeHead : NSManagedObject

@property (copy, nonatomic) NSString *application;
@property (nonatomic) NSInteger consistencyVerified;
@property (retain, nonatomic) NSSet *failures;
@property (nonatomic) NSInteger gossip;
@property (nonatomic) NSInteger inclusionVerified;
@property (nonatomic) BOOL isMapHead;
@property (nonatomic) NSInteger logBeginTime;
@property (retain, nonatomic) NSData *logHeadHash;
@property (nonatomic) NSInteger logType;
@property (nonatomic) NSInteger mmdVerified;
@property (nonatomic) CGFloat receiptTime;
@property (nonatomic) NSInteger revision;
@property (nonatomic) NSInteger signatureVerified;
@property (retain, nonatomic) NSData *sth;


+(id)fetchRequest;


@end


#endif