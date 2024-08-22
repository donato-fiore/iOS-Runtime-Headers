// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10STOCKSCOREP33_8C966C5F00639263239FB762C796378633CLOUDKITWATCHLISTMETADATAPROVIDER_H
#define _TTC10STOCKSCOREP33_8C966C5F00639263239FB762C796378633CLOUDKITWATCHLISTMETADATAPROVIDER_H

@class SwiftObject;
@protocol SCWWatchlistMetadataProviding;



@interface _TtC10StocksCoreP33_8C966C5F00639263239FB762C796378633CloudKitWatchlistMetadataProvider : SwiftObject <SCWWatchlistMetadataProviding>

 {
    ? metadataManager;
    ? metadataCache;
}




-(void)fetchMetadataForSymbols:(id)arg0 completion:(id)arg1 ;


@end


#endif