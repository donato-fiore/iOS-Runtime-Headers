// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCAPPEARANCE_H
#define DOCAPPEARANCE_H

@class NSString, UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DOCAppearance : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_collectionCreateButtonTitle;
}


@property BOOL alwaysEnableScrollInSourceView; // ivar: _alwaysEnableScrollInSourceView
@property (readonly) UIColor *backgroundColor;
@property (nonatomic) NSUInteger browserUserInterfaceStyle; // ivar: _browserUserInterfaceStyle
@property (retain, nonatomic) NSString *collectionCreateButtonTitle;
@property (nonatomic) CGFloat compactHorizontalTableStackSpacing; // ivar: _compactHorizontalTableStackSpacing
@property (nonatomic) CGFloat defaultDocumentAspectRatio; // ivar: _defaultDocumentAspectRatio
@property (nonatomic) BOOL forceClearBackground; // ivar: _forceClearBackground
@property (nonatomic) CGFloat fullHorizontalTableStackSpacing; // ivar: _fullHorizontalTableStackSpacing
@property (retain, nonatomic) UIColor *largeTitleColor; // ivar: _largeTitleColor
@property (nonatomic) CGFloat regularHorizontalTableStackSpacing; // ivar: _regularHorizontalTableStackSpacing
@property (nonatomic) BOOL shouldShowFileExtensions; // ivar: _shouldShowFileExtensions
@property (nonatomic) BOOL showsCreateButton; // ivar: _showsCreateButton


+(BOOL)supportsSecureCoding;
+(id)documentsPickerAppearance;
+(id)recentsPopoverAppearance;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif