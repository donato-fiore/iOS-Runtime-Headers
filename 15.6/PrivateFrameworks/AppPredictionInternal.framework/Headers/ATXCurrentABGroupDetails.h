// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCURRENTABGROUPDETAILS_H
#define ATXCURRENTABGROUPDETAILS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXCurrentABGroupDetails : NSObject

@property (readonly, nonatomic) NSMutableDictionary *subTypeToABGroup; // ivar: _subTypeToABGroup
@property (readonly, nonatomic) NSMutableDictionary *subTypeToFinalSubscore; // ivar: _subTypeToFinalSubscore


-(id)abGroupIdentifierForConsumerSubType:(unsigned char)arg0 ;
-(id)abGroupIdentifierForFilename:(id)arg0 ;
-(id)finalSubScoreForConsumerSubType:(unsigned char)arg0 ;
-(id)init;
-(id)initWithAssetMapping:(id)arg0 ;
-(void)loadAssetFromAssetMapping:(id)arg0 ;
-(void)setABGroupFromFilename:(id)arg0 subType:(unsigned char)arg1 filenameToABGroup:(id)arg2 ;
-(void)setFinalSubscore:(id)arg0 subType:(unsigned char)arg1 ;


@end


#endif