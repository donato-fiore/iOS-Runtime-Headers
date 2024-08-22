// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPRECORDLOADINGDELEGATE_H
#define PPRECORDLOADINGDELEGATE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PPRecordLoadingDelegate : NSObject

@property (retain, nonatomic) NSDate *loadRecordsDetectedSince; // ivar: _loadRecordsDetectedSince
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)initWithName:(id)arg0 ;
-(unsigned char)recentRecordLoadingHandler:(id)arg0 ;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg0 ;
-(unsigned char)recordLoadingSetup;
-(void)recentRecordLoadingCompletion;
-(void)recordLoadingCompletion;
-(void)resetRecordData;


@end


#endif