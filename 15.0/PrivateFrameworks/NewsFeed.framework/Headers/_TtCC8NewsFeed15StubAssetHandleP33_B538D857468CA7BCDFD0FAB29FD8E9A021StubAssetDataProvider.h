// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCC8NEWSFEED15STUBASSETHANDLEP33_B538D857468CA7BCDFD0FAB29FD8E9A021STUBASSETDATAPROVIDER_H
#define _TTCC8NEWSFEED15STUBASSETHANDLEP33_B538D857468CA7BCDFD0FAB29FD8E9A021STUBASSETDATAPROVIDER_H

@class SwiftObject, NSData, NSString;
@protocol FCAssetDataProvider;



@interface _TtCC8NewsFeed15StubAssetHandleP33_B538D857468CA7BCDFD0FAB29FD8E9A021StubAssetDataProvider : SwiftObject <FCAssetDataProvider>

 {
    ? data;
    ? filePath;
}


@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) BOOL isRawFileConsumable; // ivar: isRawFileConsumable




@end


#endif