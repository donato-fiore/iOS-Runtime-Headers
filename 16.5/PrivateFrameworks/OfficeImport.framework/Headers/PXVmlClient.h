// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVMLCLIENT_H
#define PXVMLCLIENT_H

@protocol OAVReadClient;

#import <Foundation/Foundation.h>


@interface PXVmlClient : NSObject <OAVReadClient>





+(?)readClientDataFromGroup:(?)arg0 toGroupstate;
+(?)readClientDataFromShape:(?)arg0 toGraphicstate;
+(id)colorWithRecolorInfoColorString:(id)arg0 ;
+(int)vmlSupportLevel;


@end


#endif