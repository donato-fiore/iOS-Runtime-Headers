// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOSUBSTITUTION_H
#define VOSUBSTITUTION_H

@class NSManagedObject, NSString, NSData, NSSet;



@interface VOSubstitution : NSManagedObject

@property (nonatomic) BOOL appliesToAllApps;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSSet *iOSBundles;
@property (nonatomic) BOOL ignoreCase;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isUserSubstitution;
@property (retain, nonatomic) NSSet *languages;
@property (retain, nonatomic) NSSet *macOSBundles;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *phonemes;
@property (nonatomic) NSInteger replacementLength;
@property (nonatomic) NSInteger replacementLocation;
@property (copy, nonatomic) NSString *replacementString;
@property (nonatomic) short version;
@property (retain, nonatomic) NSSet *voices;


+(id)fetchRequest;


@end


#endif