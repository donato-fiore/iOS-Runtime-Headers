// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLDESADRECORDCONTENTS_H
#define APODMLDESADRECORDCONTENTS_H

@class NSString, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface APOdmlDESAdRecordContents : NSObject

@property (readonly, nonatomic) NSString *adamID; // ivar: _adamID
@property (nonatomic) BOOL addImpression; // ivar: _addImpression
@property (nonatomic) BOOL addTap; // ivar: _addTap
@property (readonly, nonatomic) NSString *instanceID; // ivar: _instanceID
@property (retain, nonatomic) NSMutableDictionary *odmlData; // ivar: _odmlData
@property (retain, nonatomic) NSNumber *originalIndex; // ivar: _originalIndex
@property (retain, nonatomic) NSNumber *rerankedIndex; // ivar: _rerankedIndex
@property (retain, nonatomic) NSString *responseType; // ivar: _responseType


-(id)initWithInstanceID:(id)arg0 adamID:(id)arg1 originalIndex:(NSUInteger)arg2 responseType:(id)arg3 ;
-(id)recordData;
-(void)collectODMLResponse:(id)arg0 ;
-(void)updateEvent:(NSInteger)arg0 ;


@end


#endif