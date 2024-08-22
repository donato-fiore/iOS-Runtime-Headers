// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSENTITLEMENTTEMPLATE_H
#define PKPASSENTITLEMENTTEMPLATE_H

@class NSDictionary, NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface PKPassEntitlementTemplate : NSObject {
    NSDictionary *_rawDictionary;
    NSBundle *_bundle;
    NSDictionary *_fieldInserts;
}


@property (readonly, nonatomic) BOOL clearGroupWhenSelected;
@property (readonly, nonatomic) NSUInteger displayStyle;
@property (readonly, nonatomic) NSInteger groupRenderingPriority;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedGroup;
@property (readonly, nonatomic) NSString *localizedTitle;


-(id)_stringReplacingPlaceholdersInString:(id)arg0 withInserts:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)setFieldInserts:(id)arg0 ;


@end


#endif