// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXVMLCLIENT_H
#define EXVMLCLIENT_H

@protocol OAVReadClient;

#import <Foundation/Foundation.h>


@interface EXVmlClient : NSObject <OAVReadClient>





+(?)edTextBoxForVmlTextInShape:(?)arg0 tostate;
+(?)readAnchorto;
+(?)readClientDataFromGroup:(?)arg0 toGroupstate;
+(?)readClientDataFromShape:(?)arg0 toGraphicstate;
+(?)readComment:(?)arg0 tostate;
+(int)vmlSupportLevel;


@end


#endif