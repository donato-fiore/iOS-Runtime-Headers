// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITCONNECTIONINFO_H
#define _GEOTRANSITCONNECTIONINFO_H

@class NSString, NSArray, NSURL;
@protocol GEOTransitConnectionInfo;

#import <Foundation/Foundation.h>

#import "GEOPDTransitConnection.h"

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo>

 {
    GEOPDTransitConnection *_connection;
    int _providerID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int providerID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *urlToOpen;


-(id)initWithConnection:(id)arg0 providerID:(int)arg1 ;


@end


#endif