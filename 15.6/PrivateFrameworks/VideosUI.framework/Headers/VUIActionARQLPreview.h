// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONARQLPREVIEW_H
#define VUIACTIONARQLPREVIEW_H

@class NSString;


#import "VUIAction.h"

@interface VUIActionARQLPreview : VUIAction

@property (retain, nonatomic) NSString *previewURLString; // ivar: _previewURLString
@property (retain, nonatomic) NSString *shareURLString; // ivar: _shareURLString


-(id)initWithContextData:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif