// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARSEOVERRIDE_H
#define PARSEOVERRIDE_H

@class NSManagedObject, NSData, NSDate, NSString;



@interface ParseOverride : NSManagedObject

@property (nonatomic, copy) NSData *archivedNluRequestRule;
@property (nonatomic, copy) NSDate *creation;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *inputText;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) int namespace;
@property (nonatomic, copy) NSString *overrideId;
@property (nonatomic) int source;
@property (nonatomic, copy) NSData *userParse;
@property (nonatomic) int utteranceComparisonType;


-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif