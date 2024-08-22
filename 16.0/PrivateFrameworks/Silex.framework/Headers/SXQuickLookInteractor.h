// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXQUICKLOOKINTERACTOR_H
#define SXQUICKLOOKINTERACTOR_H

@class NSString;
@protocol SXQuickLookInteractor, SXQuickLookInteractorDelegate, SXQuickLookService;

#import <Foundation/Foundation.h>

#import "SXQuickLookFile.h"

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXQuickLookInteractorDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXQuickLookFile *file; // ivar: _file
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXQuickLookService> *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithFile:(id)arg0 service:(id)arg1 ;
-(void)loadThumbnailWithSize:(struct CGSize )arg0 ;


@end


#endif