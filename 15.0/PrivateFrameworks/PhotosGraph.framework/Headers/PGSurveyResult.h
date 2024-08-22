// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSURVEYRESULT_H
#define PGSURVEYRESULT_H

@class NSDictionary, NSDate, NSString;
@protocol PGQuestion;

#import <Foundation/Foundation.h>


@interface PGSurveyResult : NSObject <PGQuestion>



@property (copy, nonatomic) NSDictionary *additionalInfo; // ivar: additionalInfo
@property (retain, nonatomic) NSDate *creationDate; // ivar: creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short displayType; // ivar: displayType
@property (copy, nonatomic) NSString *entityIdentifier; // ivar: entityIdentifier
@property (nonatomic) unsigned short entityType; // ivar: entityType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat localFactoryScore; // ivar: localFactoryScore
@property (copy, nonatomic) NSString *momentIdentifier; // ivar: momentIdentifier
@property (nonatomic) CGFloat score; // ivar: score
@property (nonatomic) unsigned short state; // ivar: state
@property (readonly) Class superclass;
@property (nonatomic) unsigned short type; // ivar: type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg0 ;
-(BOOL)isEquivalentToSurveyResult:(id)arg0 ;
-(void)persistWithCreationDate:(id)arg0 ;
-(void)remove;


@end


#endif