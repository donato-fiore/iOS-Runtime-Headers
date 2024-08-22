// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBITEMPROVIDERLOADRESULT_H
#define WEBITEMPROVIDERLOADRESULT_H

@class NSItemProvider, NSArray;

#import <Foundation/Foundation.h>


@interface WebItemProviderLoadResult : NSObject {
    RetainPtr<NSMutableDictionary<NSString *,NSURL *>> _fileURLs;
    RetainPtr<NSItemProvider> _itemProvider;
    RetainPtr<NSArray<NSString *>> _typesToLoad;
}


@property (readonly, nonatomic) BOOL canBeRepresentedAsFileUpload;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSArray *loadedFileURLs;
@property (readonly, nonatomic) NSArray *loadedTypeIdentifiers;
@property (readonly, nonatomic) NSArray *typesToLoad;


+(id)loadResultWithItemProvider:(id)arg0 typesToLoad:(id)arg1 ;
-(id)description;
-(id)fileURLForType:(id)arg0 ;
-(id)initWithItemProvider:(id)arg0 typesToLoad:(id)arg1 ;
-(void)setFileURL:(id)arg0 forType:(id)arg1 ;


@end


#endif