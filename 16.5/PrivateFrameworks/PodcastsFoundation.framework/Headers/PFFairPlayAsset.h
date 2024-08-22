// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFFAIRPLAYASSET_H
#define PFFAIRPLAYASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFFairPlayAsset : NSObject {
    ? adamID;
    ? avAsset;
    ? keyStore;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isOfflineAsset;


-(id)init;
-(id)initWithAdamID:(NSInteger)arg0 avAsset:(id)arg1 ;


@end


#endif