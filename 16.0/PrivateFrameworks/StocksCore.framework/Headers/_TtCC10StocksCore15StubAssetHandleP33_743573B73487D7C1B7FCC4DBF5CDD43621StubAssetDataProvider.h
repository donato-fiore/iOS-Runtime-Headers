// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC10STOCKSCORE15STUBASSETHANDLEP33_743573B73487D7C1B7FCC4DBF5CDD43621STUBASSETDATAPROVIDER_H
#define _TTCC10STOCKSCORE15STUBASSETHANDLEP33_743573B73487D7C1B7FCC4DBF5CDD43621STUBASSETDATAPROVIDER_H

@class SwiftObject, NSData, NSString;
@protocol FCAssetDataProvider;



@interface _TtCC10StocksCore15StubAssetHandleP33_743573B73487D7C1B7FCC4DBF5CDD43621StubAssetDataProvider : SwiftObject <FCAssetDataProvider>

 {
    ? data;
    ? filePath;
}


@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) BOOL isRawFileConsumable; // ivar: isRawFileConsumable




@end


#endif