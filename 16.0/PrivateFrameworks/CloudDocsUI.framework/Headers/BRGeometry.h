// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRGEOMETRY_H
#define BRGEOMETRY_H

@class NSString, NSArray;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface BRGeometry : NSObject <NSCoding>



@property (nonatomic) CGRect absoluteFrame; // ivar: _absoluteFrame
@property (copy, nonatomic) NSString *contentDescription; // ivar: _contentDescription
@property (nonatomic) BOOL hasAmbiguousLayout; // ivar: _hasAmbiguousLayout
@property (nonatomic) BOOL isClipped; // ivar: _isClipped
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *subitems; // ivar: _subitems


+(void)initialize;
-(BOOL)isEqualToTemplate:(id)arg0 diagnostic:(*id)arg1 ;
-(BOOL)isValidForGeometryValidation:(NSUInteger)arg0 offendingGeometry:(*id)arg1 ;
-(id)data;
-(id)description;
-(id)gatherSubviews:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 rootView:(id)arg1 ;
-(id)recursiveDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif