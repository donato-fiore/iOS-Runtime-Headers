// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAUICUBICBSPLINERENDERER_H
#define LAUICUBICBSPLINERENDERER_H

@class MTLRenderPassDescriptor;
@protocol MTLCommandQueue, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "LAUIMetalRenderLoop.h"

@interface LAUICubicBSplineRenderer : NSObject {
    LAUIMetalRenderLoop *_render_loop;
    NSUInteger _frame_index;
    renderer_shared_state _shared_render_state;
    id<MTLCommandQueue> *_command_queue;
    MTLRenderPassDescriptor *_render_pass_descriptor;
    MTLRenderPassDescriptor *_clear_pass_descriptor;
    vector<(anonymous namespace)::buffer_group, std::allocator<(anonymous namespace)::buffer_group>> _ring_buffer;
    atomic<unsigned char> _ring_start;
    atomic<unsigned char> _ring_end;
    id<MTLBuffer> *_tesselation_factors;
    NSUInteger _drawable_width;
    NSUInteger _drawable_height;
    id<MTLTexture> *_multisample_texture;
    id<MTLTexture> *_depth_stencil_texture;
    BOOL _textures_dirty;
    array<id<MTLTexture>, 2UL> _textures;
    NSUInteger _texture_index;
    vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> _control_points;
    vector<unsigned short, std::allocator<unsigned short>> _control_point_indices;
    vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> _cap_control_points;
    vector<unsigned short, std::allocator<unsigned short>> _cap_control_point_indices;
    vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> _spline_instance_uniforms;
    BOOL _caps_dirty;
    CGFloat _last_render_time;
    global_state_animator _global_state_animator;
    vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> _animation_targets;
    NSUInteger _current_animation_target_index;
    BOOL _reversed;
    BOOL _needs_update;
    animation_completion_handler_container _completion_container;
    vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> _spline_state;
    vector<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> _instance_state;
    NSUInteger _instance_count;
    BOOL _wireframe_enabled;
    double4x4 _model_transform;
    double4x4 _view_transform;
    double4x4 _projection_transform;
}




-(id)init;
-(void)dealloc;


@end


#endif