// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBIOMESUGGESTEDHOMEPAGEEVENT_H
#define ATXBIOMESUGGESTEDHOMEPAGEEVENT_H

@class NSString;
@protocol NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>


@interface ATXBiomeSuggestedHomePageEvent : NSObject <NSSecureCoding, BMStoreData>



@property (nonatomic) NSInteger action; // ivar: _action
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger pageType; // ivar: _pageType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPageType:(NSInteger)arg0 identifier:(id)arg1 action:(NSInteger)arg2 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif