// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFAVICONPROVIDERICONINFO_H
#define WBSFAVICONPROVIDERICONINFO_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WBSFaviconProviderIconInfo : NSObject

@property (readonly, copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (readonly, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (readonly, nonatomic) BOOL hasGeneratedResolutions; // ivar: _hasGeneratedResolutions
@property (readonly, copy, nonatomic) NSString *iconURLString; // ivar: _iconURLString
@property (readonly, nonatomic) BOOL isRejectedResource; // ivar: _isRejectedResource
@property (readonly, copy, nonatomic) NSString *pageURLString; // ivar: _pageURLString
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)init;
-(id)initWithPageURLString:(id)arg0 iconURLString:(id)arg1 UUIDString:(id)arg2 dateAdded:(id)arg3 size:(struct CGSize )arg4 hasGeneratedResolutions:(BOOL)arg5 isRejectedResource:(BOOL)arg6 ;


@end


#endif