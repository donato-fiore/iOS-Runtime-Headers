// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTESECTIONIDENTIFIER_H
#define ICNOTESECTIONIDENTIFIER_H

@class NSString;
@protocol ICSectionIdentifier, ICItemIdentifier;

#import <Foundation/Foundation.h>


@interface ICNoteSectionIdentifier : NSObject <ICSectionIdentifier>



@property (readonly, nonatomic, getter=isCollapsible) BOOL collapsible;
@property (readonly, nonatomic) BOOL containsRelevantIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *parentIdentifier;
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(id)sortDescriptors;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICNoteSectionIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNoteSectionType:(NSInteger)arg0 ;


@end


#endif