// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNDEFAULTICONIDENTIFIERVERSIONPROVIDER_H
#define CALNDEFAULTICONIDENTIFIERVERSIONPROVIDER_H

@class NSString;
@protocol CALNIconIdentifierVersionProvider;

#import <Foundation/Foundation.h>


@interface CALNDefaultIconIdentifierVersionProvider : NSObject <CALNIconIdentifierVersionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iconIdentifierVersion;
@property (readonly, nonatomic) NSInteger iconVersionToUpgradeTo;
@property (readonly) Class superclass;




@end


#endif