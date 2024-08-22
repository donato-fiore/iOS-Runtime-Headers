// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDOFFICEARTCLIENT_H
#define CHDOFFICEARTCLIENT_H

@class NSString;
@protocol OADClient;

#import <Foundation/Foundation.h>

#import "CHDAnchor.h"

@interface CHDOfficeArtClient : NSObject <OADClient>

 {
    CHDAnchor *mAnchor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasBounds;
-(id)anchor;
-(struct CGRect )bounds;
-(void)setAnchor:(id)arg0 ;


@end


#endif