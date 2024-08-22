// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSECTION_H
#define SUSECTION_H

@class NSMutableDictionary, NSString, UIImage, NSArray, UIColor, NSURL;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"
#import "SUGradient.h"
#import "SUPageSectionGroup.h"
#import "SUSearchFieldConfiguration.h"

@interface SUSection : NSObject {
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_sectionButtonImages;
}


@property (readonly, nonatomic) SUGradient *backgroundGradient;
@property (readonly, nonatomic) NSInteger defaultPNGStyle;
@property (readonly, nonatomic, getter=isDefaultSection) BOOL defaultSection;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSArray *itemImages;
@property (readonly, nonatomic) NSArray *leftSectionButtons;
@property (readonly, nonatomic) UIColor *loadingIndicatorColor;
@property (readonly, nonatomic) UIColor *loadingTextColor;
@property (readonly, nonatomic) UIColor *loadingTextShadowColor;
@property (readonly, nonatomic) NSInteger minimumNetworkType;
@property (retain, nonatomic) UIImage *moreListImage; // ivar: _moreListImage
@property (readonly, nonatomic) SUPageSectionGroup *pageSectionGroup;
@property (readonly, nonatomic) NSString *partnerHeader;
@property (readonly, nonatomic) NSArray *rightSectionButtons;
@property (retain, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration; // ivar: _searchFieldConfiguration
@property (retain, nonatomic) UIImage *selectedImage; // ivar: _selectedImage
@property (retain, nonatomic) UIImage *selectedMoreListImage; // ivar: _selectedMoreListImage
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *urlBagKey;
@property (readonly, nonatomic, getter=isUsingLocalArtwork) BOOL usingLocalArtwork;


-(BOOL)loadFromDictionary:(id)arg0 searchField:(id)arg1 ;
-(NSInteger)_minimumNetworkTypeFromDictionary:(id)arg0 ;
-(NSInteger)_typeForString:(id)arg0 ;
-(id)_colorForKey:(id)arg0 ;
-(id)_sectionButtonsForKey:(id)arg0 ;
-(id)description;
-(id)imageForSectionButtonWithTag:(NSInteger)arg0 ;
-(id)initWithClientInterface:(id)arg0 ;
-(id)initWithClientInterface:(id)arg0 sectionType:(NSInteger)arg1 defaultPNGStyle:(NSInteger)arg2 ;
-(id)valueForProperty:(id)arg0 ;
-(void)dealloc;
-(void)setSectionButtonImage:(id)arg0 forTag:(NSInteger)arg1 ;


@end


#endif