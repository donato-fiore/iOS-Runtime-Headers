// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDPLACEHOLDERTIMELINEENTRYMODEL_H
#define NTKGREENFIELDPLACEHOLDERTIMELINEENTRYMODEL_H

@class UIImage, NSString;


#import "NTKTimelineEntryModel.h"

@interface NTKGreenfieldPlaceholderTimelineEntryModel : NTKTimelineEntryModel {
    NSUInteger _modelState;
    UIImage *_appIcon;
    NSString *_appName;
    CGFloat _installationProgress;
}




+(id)entryModelWithAppIcon:(id)arg0 appName:(id)arg1 installationProgress:(float)arg2 ;
+(id)entryModelWithNullState;
+(id)placeholderImageForFamily:(NSInteger)arg0 ;
-(id)_circularSmallTemplateForInstallation;
-(id)_downloadTextWithIsUpperCased:(BOOL)arg0 ;
-(id)_extraLargeTemplateForInstallation;
-(id)_graphicBezelTemplateForInstallation;
-(id)_graphicCircularTemplateForInstallation;
-(id)_graphicCornerTemplateForInstallation;
-(id)_graphicExtraLargeTemplateForInstallation;
-(id)_graphicRectangularTemplateForInstallation;
-(id)_installationTemplateForComplicationFamily:(NSInteger)arg0 ;
-(id)_modularLargeTemplateForInstallation;
-(id)_modularSmallTemplateForInstallation;
-(id)_placeholderFullColorImageProvider;
-(id)_placeholderImageProvider;
-(id)_utilitarianLargeTemplateForInstallation;
-(id)_utilitarianSmallFlatTemplateForInstallation;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif