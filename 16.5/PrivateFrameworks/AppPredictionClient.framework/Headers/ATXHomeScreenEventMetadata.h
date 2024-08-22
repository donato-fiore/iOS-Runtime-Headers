// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENEVENTMETADATA_H
#define ATXHOMESCREENEVENTMETADATA_H

@class NSMutableArray, NSArray, NSURL, NSNumber, NSDictionary;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXCGRectWrapper.h"

@interface ATXHomeScreenEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

 {
    NSMutableArray *_stackIds;
    NSMutableArray *_widgets;
}


@property (retain, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property (retain, nonatomic) NSURL *engagedUrl; // ivar: _engagedUrl
@property (retain, nonatomic) NSNumber *isStalenessRotation; // ivar: _isStalenessRotation
@property (retain, nonatomic) NSNumber *isSuggestionInAddWidgetSheet; // ivar: _isSuggestionInAddWidgetSheet
@property (retain, nonatomic) NSNumber *isWidgetInTodayView; // ivar: _isWidgetInTodayView
@property (retain, nonatomic) NSNumber *pageIndex; // ivar: _pageIndex
@property (retain, nonatomic) NSDictionary *stacks;
@property (nonatomic) NSInteger suggestedPageType; // ivar: _suggestedPageType
@property (retain, nonatomic) ATXCGRectWrapper *visibleRect; // ivar: _visibleRect
@property (retain, nonatomic) NSArray *widgetsInStack; // ivar: _widgetsInStack


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenEventMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPageIndex:(id)arg0 suggestedPageType:(NSInteger)arg1 stacks:(id)arg2 widgetsInStack:(id)arg3 isSuggestionInAddWidgetSheet:(id)arg4 isWidgetInTodayView:(id)arg5 visibleRect:(id)arg6 engagedUrl:(id)arg7 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif