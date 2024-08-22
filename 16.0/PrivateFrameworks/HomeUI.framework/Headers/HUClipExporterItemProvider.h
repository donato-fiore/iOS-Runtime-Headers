// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCLIPEXPORTERITEMPROVIDER_H
#define HUCLIPEXPORTERITEMPROVIDER_H

@class UIActivityItemProvider, NSURL;



@interface HUClipExporterItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSURL *clipURL; // ivar: _clipURL


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)item;


@end


#endif