// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTROKESELECTIONCOHERENCE_H
#define PKSTROKESELECTIONCOHERENCE_H

@class PKStrokeSelection, NSString;
@protocol NSItemProviderReading;



@interface PKStrokeSelectionCoherence : PKStrokeSelection <NSItemProviderReading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;


@end


#endif