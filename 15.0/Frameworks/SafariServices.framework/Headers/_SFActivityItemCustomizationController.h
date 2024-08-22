// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFACTIVITYITEMCUSTOMIZATIONCONTROLLER_H
#define _SFACTIVITYITEMCUSTOMIZATIONCONTROLLER_H

@class NSString;
@protocol UIActivityViewControllerObjectManipulationDelegate, _SFActivityItemCustomizationDelegate;

#import <Foundation/Foundation.h>


@interface _SFActivityItemCustomizationController : NSObject <UIActivityViewControllerObjectManipulationDelegate>

 {
    BOOL _contentTypeAllowedMap;
}


@property (readonly, nonatomic) BOOL canPrint;
@property (readonly, nonatomic) BOOL canShareAsDownload;
@property (readonly, nonatomic) BOOL canShareAsLink;
@property (readonly, nonatomic) BOOL canShareAsPDF;
@property (readonly, nonatomic) BOOL canShareAsStandaloneImage;
@property (readonly, nonatomic) BOOL canShareAsWebArchive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFActivityItemCustomizationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger selectedContentType; // ivar: _selectedContentType
@property (readonly) Class superclass;


-(NSInteger)_contentTypeForAllowedContentAtIndex:(NSInteger)arg0 ;
-(NSInteger)_selectedIndex;
-(id)_allowedContentTypes;
-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)init;
-(void)_customizationsDidChange;
-(void)_ensureSelectedContentTypeIsAllowed;


@end


#endif