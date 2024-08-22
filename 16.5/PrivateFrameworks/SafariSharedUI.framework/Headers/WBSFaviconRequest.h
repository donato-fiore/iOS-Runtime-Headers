// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFAVICONREQUEST_H
#define WBSFAVICONREQUEST_H

@class NSString;
@protocol WBSIconRequest;


#import "WBSSiteMetadataRequest.h"

@interface WBSFaviconRequest : WBSSiteMetadataRequest <WBSIconRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fallbackType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize iconSize;
@property (readonly, nonatomic) BOOL isURLTypedByUser;
@property (readonly, nonatomic) CGSize sizeForDrawing;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


-(id)_initWithURL:(id)arg0 type:(NSUInteger)arg1 iconSize:(struct CGSize )arg2 fallbackType:(NSUInteger)arg3 isURLTypedByUser:(BOOL)arg4 ;
-(id)initWithDomain:(id)arg0 iconSize:(struct CGSize )arg1 fallbackType:(NSUInteger)arg2 ;
-(id)initWithURL:(id)arg0 extraInfo:(id)arg1 ;
-(id)initWithURL:(id)arg0 iconSize:(struct CGSize )arg1 fallbackType:(NSUInteger)arg2 ;
-(id)initWithURL:(id)arg0 iconSize:(struct CGSize )arg1 fallbackType:(NSUInteger)arg2 isURLTypedByUser:(BOOL)arg3 ;


@end


#endif