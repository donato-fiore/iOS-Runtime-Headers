// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMANAGEDLIKENESSCHANGE_H
#define PRMANAGEDLIKENESSCHANGE_H

@class NSManagedObject, NSString, NSNumber, NSDate;



@interface PRManagedLikenessChange : NSManagedObject

@property (retain, nonatomic) NSString *changedID;
@property (retain, nonatomic) NSString *changedProperties;
@property (retain, nonatomic) NSNumber *changedVersion;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *type;




@end


#endif