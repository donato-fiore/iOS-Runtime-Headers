// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSURVEYQUESTION_H
#define PGSURVEYQUESTION_H

@class NSDictionary, NSString;
@protocol PGQuestion;

#import <Foundation/Foundation.h>


@interface PGSurveyQuestion : NSObject <PGQuestion>



@property (readonly, copy, nonatomic) NSDictionary *additionalInfo; // ivar: additionalInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short displayType;
@property (readonly, copy, nonatomic) NSString *entityIdentifier; // ivar: entityIdentifier
@property (readonly, nonatomic) unsigned short entityType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat localFactoryScore; // ivar: localFactoryScore
@property (nonatomic) CGFloat score; // ivar: score
@property (readonly, nonatomic) unsigned short state; // ivar: state
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short type;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg0 ;
-(BOOL)isEquivalentToQuestion:(id)arg0 ;
-(void)persistWithCreationDate:(id)arg0 questionVersion:(short)arg1 ;
-(void)remove;


@end


#endif