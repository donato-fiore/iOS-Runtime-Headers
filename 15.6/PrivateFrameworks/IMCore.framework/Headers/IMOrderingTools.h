// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMORDERINGTOOLS_H
#define IMORDERINGTOOLS_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface IMOrderingTools : NSObject

@property (retain, nonatomic) NSMutableArray *jsonArray; // ivar: _jsonArray
@property (retain, nonatomic) NSString *jsonFilePath; // ivar: _jsonFilePath


-(id)currentJsonArray;
-(id)messageDictionariesFromItemsInChat:(id)arg0 withEventKey:(id)arg1 ;
-(id)pathToDirectoryOfJSONFile;
-(void)printChangeInItemsToJSON:(id)arg0 ;
-(void)printChangeInItemsToJSONFromChat:(id)arg0 ;
-(void)setUpJSONFileForChatGUID:(id)arg0 ;
-(void)startTrackingChat:(id)arg0 ;
-(void)writeDataToJSONFile:(id)arg0 ;


@end


#endif