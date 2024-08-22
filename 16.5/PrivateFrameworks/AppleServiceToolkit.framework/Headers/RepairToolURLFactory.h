// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPAIRTOOLURLFACTORY_H
#define REPAIRTOOLURLFACTORY_H

@class NSString, NSArray;
@protocol NSURLRequestFactory;

#import <Foundation/Foundation.h>


@interface RepairToolURLFactory : NSObject <NSURLRequestFactory>



@property (nonatomic) int currentIndex; // ivar: _currentIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *encryptionKey; // ivar: _encryptionKey
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *requestItems; // ivar: _requestItems
@property (readonly) Class superclass;


-(id)initWithRequestItems:(id)arg0 ;
-(id)urlRequest;


@end


#endif