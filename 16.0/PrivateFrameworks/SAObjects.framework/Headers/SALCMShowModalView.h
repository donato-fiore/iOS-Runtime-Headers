// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALCMSHOWMODALVIEW_H
#define SALCMSHOWMODALVIEW_H



#import "SABaseClientBoundCommand.h"
#import "SAAceView.h"

@interface SALCMShowModalView : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *view;


+(id)showModalView;
+(id)showModalViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif