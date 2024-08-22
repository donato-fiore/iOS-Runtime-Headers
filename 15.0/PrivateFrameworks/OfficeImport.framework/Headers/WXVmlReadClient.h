// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WXVMLREADCLIENT_H
#define WXVMLREADCLIENT_H

@protocol OAVReadClient;

#import <Foundation/Foundation.h>


@interface WXVmlReadClient : NSObject <OAVReadClient>





+(?)readClientDataFromGroup:(?)arg0 toGroupstate;
+(?)readClientDataFromShape:(?)arg0 toGraphicstate;
+(?)readFromDrawabletoContent;
+(?)readTextWrappingFromParenttoAnchor;
+(BOOL)floating:(id)arg0 ;
+(CGFloat)wrapDistanceBottom:(id)arg0 ;
+(CGFloat)wrapDistanceLeft:(id)arg0 ;
+(CGFloat)wrapDistanceRight:(id)arg0 ;
+(CGFloat)wrapDistanceTop:(id)arg0 ;
+(int)horizontalPosition:(id)arg0 ;
+(int)relativeHorizontalPosition:(id)arg0 ;
+(int)relativeVerticalPosition:(id)arg0 ;
+(int)verticalPosition:(id)arg0 ;
+(int)vmlSupportLevel;
+(int)zIndex:(id)arg0 ;
+(void)copyFromDrawable:(id)arg0 toContent:(id)arg1 ;
+(void)initialize;


@end


#endif