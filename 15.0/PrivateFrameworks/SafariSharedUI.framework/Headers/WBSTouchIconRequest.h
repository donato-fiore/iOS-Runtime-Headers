// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSTOUCHICONREQUEST_H
#define WBSTOUCHICONREQUEST_H

@class NSString;
@protocol WBSIconRequest;


#import "WBSSiteMetadataRequest.h"

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIconDownloadingEnabled) BOOL iconDownloadingEnabled; // ivar: _iconDownloadingEnabled
@property (readonly, nonatomic, getter=isIconGenerationEnabled) BOOL iconGenerationEnabled; // ivar: _iconGenerationEnabled
@property (readonly, nonatomic) CGSize maximumIconSize; // ivar: _maximumIconSize
@property (readonly, nonatomic) CGSize minimumIconSize; // ivar: _minimumIconSize
@property (readonly, copy, nonatomic) NSString *monogramTitle; // ivar: _monogramTitle
@property (readonly, nonatomic) CGSize sizeForDrawing;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(id)requestWithTitle:(id)arg0 url:(id)arg1 minimumIconSize:(struct CGSize )arg2 maximumIconSize:(struct CGSize )arg3 ;
+(id)requestWithTitle:(id)arg0 url:(id)arg1 minimumIconSize:(struct CGSize )arg2 maximumIconSize:(struct CGSize )arg3 iconGenerationEnabled:(BOOL)arg4 ;
+(id)requestWithTitle:(id)arg0 url:(id)arg1 minimumIconSize:(struct CGSize )arg2 maximumIconSize:(struct CGSize )arg3 iconGenerationEnabled:(BOOL)arg4 iconDownloadingEnabled:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 minimumIconSize:(struct CGSize )arg2 maximumIconSize:(struct CGSize )arg3 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 minimumIconSize:(struct CGSize )arg2 maximumIconSize:(struct CGSize )arg3 iconGenerationEnabled:(BOOL)arg4 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 minimumIconSize:(struct CGSize )arg2 maximumIconSize:(struct CGSize )arg3 iconGenerationEnabled:(BOOL)arg4 iconDownloadingEnabled:(BOOL)arg5 ;


@end


#endif