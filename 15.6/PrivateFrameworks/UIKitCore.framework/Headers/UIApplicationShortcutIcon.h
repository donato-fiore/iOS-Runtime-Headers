// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAPPLICATIONSHORTCUTICON_H
#define UIAPPLICATIONSHORTCUTICON_H

@class NSString, SBSApplicationShortcutIcon;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UIApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon; // ivar: _sbsShortcutIcon
@property (readonly) Class superclass;


+(id)iconWithCustomImage:(id)arg0 ;
+(id)iconWithCustomImage:(id)arg0 isTemplate:(BOOL)arg1 ;
+(id)iconWithSystemImageName:(id)arg0 ;
+(id)iconWithTemplateImageName:(id)arg0 ;
+(id)iconWithType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSBSApplicationShortcutIcon:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif