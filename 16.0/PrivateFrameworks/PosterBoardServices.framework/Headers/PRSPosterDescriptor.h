// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSPOSTERDESCRIPTOR_H
#define PRSPOSTERDESCRIPTOR_H

@class NSURL, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "PRSPosterPath.h"

@interface PRSPosterDescriptor : NSObject {
    id<BSInvalidatable> *_pathValidityExtension;
}


@property (readonly, nonatomic) PRSPosterPath *_path; // ivar: _path
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly, copy, nonatomic) NSString *identifier;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPath:(id)arg0 ;
-(id)description;
-(id)init;
-(id)loadGalleryOptionsWithError:(*id)arg0 ;
-(id)loadUserInfoWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif