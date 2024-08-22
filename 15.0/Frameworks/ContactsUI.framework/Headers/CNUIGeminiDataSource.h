// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIGEMINIDATASOURCE_H
#define CNUIGEMINIDATASOURCE_H

@class NSString, CNContact, CNGeminiManager, CNGeminiResult;
@protocol CNGeminiManagerDelegate, CNUIGeminiDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface CNUIGeminiDataSource : NSObject <CNGeminiManagerDelegate>



@property (readonly, nonatomic) NSString *channelIdentifier;
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUIGeminiDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNGeminiManager *geminiManager; // ivar: _geminiManager
@property (retain, nonatomic) CNGeminiResult *geminiResult; // ivar: _geminiResult
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithGeminiManager:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)channelsDidChangeForGeminiManager:(id)arg0 ;
-(void)resetDataSource;


@end


#endif